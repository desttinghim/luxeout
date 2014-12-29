package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
import luxe.tween.Actuate;
import luxe.Rectangle;
/**
 * @author Desttinghim
 * null
 * null
 */
class Main extends luxe.Game
{
	private var paddle:Sprite;
	private var ball0:Sprite;

	// private var blocks:Array<Sprite> = [];
	private var collisionGroup:Array<Sprite> = [];

	private var once:Bool = true;

	override function ready() {

		paddle = new Sprite({
			name: 'paddle',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(128, 32)
		});

		ball0 = new Sprite({
			name: 'ball0',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(16,16)
		});

		for(i in 0...3) {
			var block = new Sprite({
				name: "block" + i,
				pos: new Vector(Luxe.screen.w / 2, 32 + i*24),
				color: new Color().rgb(0xffdddd),
				size: new Vector(64,16)
			});
			block.add(new Hitbox(64,16));
			block.add(new Destroyable());
			collisionGroup.push(block);
		}

		paddle.add(new Hitbox(128,32));
		ball0.add(new Hitbox(16,16));
		ball0.add(new Movement(0,200));

		collisionGroup.push(paddle);
		collisionGroup.push(ball0);

		paddle.pos.y = Luxe.screen.h - 32;
	}
	
	override function onmousemove( event:MouseEvent ) {
		
		paddle.pos.x = event.pos.x;
		
	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape) {
			Luxe.shutdown();
		}
		
	}
	
	override function update( delta:Float ) {

		//set up collision stuff
		if(ball0.pos.x < 0 || ball0.pos.y < 0 || ball0.pos.x > Luxe.screen.w) {
			ball0.get("movement").velocity.multiplyScalar(-1);
		}
		collisionSystem();

	}

	private function collisionSystem() {

		var collisions : Array<Sprite> = [];
		var otherCollisions : Array<Sprite> = [];

		for(i in collisionGroup) {
			for(a in collisionGroup) {
				if(theseCollide(i,a) && i != a) {
					collisions.push(i);
					otherCollisions.push(a);
					trace("Collision!");
				}
			}
		}

		for(i in collisions) {

			if(i.components['movement'] != null) {

				trace("\t\tMovement collision in " + i.name);
				var other = otherCollisions[collisions.indexOf(i)];
				var newVelocity;
				newVelocity = new Vector(i.pos.x - other.pos.x, i.pos.y - other.pos.y);
				i.get('movement').velocity = newVelocity.normalized.multiplyScalar(200);

			} else if(i.components['destroyable'] != null) {

				i.destroy();
				collisionGroup.remove(i);
				trace("\t\tDestruction collision in " + i.name);

			} else {

				trace("\t\tWeird collision in " + i.name );

			}

		}

	}

	private function theseCollide( spr1:Sprite, spr2:Sprite ):Bool {

		var hitbox1 = spr1.get('hitbox').getHitbox();
		var hitbox2 = spr2.get('hitbox').getHitbox();

		if(hitbox1.overlaps(hitbox2)) {
			return true;
		} else {
			return false;
		}
	}
	
}