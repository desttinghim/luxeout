package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
import luxe.tween.Actuate;
import luxe.Rectangle;
import luxe.AppConfig;

//CURRENT PROJECT: Get collision resolution figured out

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


	override function config( config:AppConfig ):AppConfig {
		
		if(config.runtime.window != null) {
			if(config.runtime.window.width != null) {
				config.window.width = Std.int(config.runtime.window.width);
			}
			if(config.runtime.window.height != null) {
				config.window.height = Std.int(config.runtime.window.height);
			}
		}

		config.window.title = "Luxeout - A Breakout Clone in Luxe";

		return config;
	}

	override function ready() {

		var borderLeft = new Sprite({
			name: 'borderleft',
			pos: new Vector(-45,Luxe.screen.mid.y),
			color: new Color().rgb(0xffffff),
			size: new Vector(50,Luxe.screen.h)
		});
		var borderRight = new Sprite({
			name: 'borderright',
			pos: new Vector(Luxe.screen.w+45,Luxe.screen.mid.y),
			color: new Color().rgb(0xffffff),
			size: new Vector(50,Luxe.screen.h)
		});
		var borderTop = new Sprite({
			name: 'bordertop',
			pos: new Vector(Luxe.screen.mid.x,-45),
			color: new Color().rgb(0xffffff),
			size: new Vector(Luxe.screen.w*3,50)
		});

		paddle = new Sprite({
			name: 'paddle',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(128, 16)
		});

		ball0 = new Sprite({
			name: 'ball0',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(16,16)
		});

		for(i in 0...5) {
			for(a in 0...5) {
			var block = new Sprite({
					name: "block" + i + "." + a,
					pos: new Vector( a*64 , i*16 + 32 ),
					color: new Color().rgb(0xffdddd),
					size: new Vector(64,16)
				});
				block.add(new Hitbox(64,16, block));
				block.add(new Destroyable());
				collisionGroup.push(block);
			}
		}

		borderLeft.add(new Hitbox( Std.int(borderLeft.size.x), Std.int(borderLeft.size.y), borderLeft));
		borderRight.add(new Hitbox( Std.int(borderRight.size.x), Std.int(borderRight.size.y), borderRight));
		borderTop.add(new Hitbox( Std.int(borderTop.size.x), Std.int(borderTop.size.y), borderTop));
		paddle.add(new Hitbox(128,16, paddle));
		ball0.add(new Hitbox(16,16, ball0));


		ball0.add(new Movement(0,200, 250, ball0));

		collisionGroup.push(paddle);
		collisionGroup.push(ball0);
		collisionGroup.push(borderLeft);
		collisionGroup.push(borderRight);
		collisionGroup.push(borderTop);

		paddle.pos.y = Luxe.screen.h - 8;
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
		// if(ball0.pos.x < 0 || ball0.pos.y < 0 || ball0.pos.x > Luxe.screen.w) {
		// 	ball0.get("movement").velocity.multiplyScalar(-1);
		// }
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

			var collisionSides:Array<Bool> = [false, false, false, false]; // Starting from top, going clockwise
			var other = otherCollisions[collisions.indexOf(i)];
			var firstRect = i.get('hitbox').getHitbox();
			var secondRect = other.get('hitbox').getHitbox();
			collisionSides[0] = (secondRect.point_inside(new Vector(firstRect.x + firstRect.w / 2, firstRect.y))); //Top check
			collisionSides[1] = (secondRect.point_inside(new Vector(firstRect.x + firstRect.w, firstRect.y + firstRect.h / 2))); //Right check
			collisionSides[2] = (secondRect.point_inside(new Vector(firstRect.x + firstRect.w / 2, firstRect.y + firstRect.h))); //Bottom check
			collisionSides[3] = (secondRect.point_inside(new Vector(firstRect.x, firstRect.y + firstRect.h / 2))); //Left check
			//MAKE SURE TO CHECK ABOVE IF SOMETHING DOESN'T WORK RIGHT
			if(collisionSides.filter(function(T) {if(T == true) return true; else return false;} ).length > 1) {
				trace("WE'VE GONE TOO DEEP.");
			}

			if(i.components['movement'] != null) {

				trace("\t\tMovement collision in " + i.name);
				// var newVelocity;
				// if(other.name == 'paddle') {
				// 	newVelocity = new Vector(i.pos.x - other.pos.x, i.pos.y - other.pos.y);
				// 	i.get('movement').velocity = newVelocity.normalized.multiplyScalar(200);
				// }
				var velocityX = i.get('movement').velocity.x;
				var velocityY = i.get('movement').velocity.y;
				var absVelocityX = Math.abs(velocityX);
				var absVelocityY = Math.abs(velocityY);

				if(other.name == 'paddle') {
					i.get('movement').velocity.x = (i.pos.x - other.pos.x)*10;
					i.get('movement').velocity.y = -absVelocityY;
				} else {

					if(collisionSides[0]) {
						i.get('movement').velocity.y = absVelocityY;
					} else if(collisionSides[2]) {
						i.get('movement').velocity.y = -absVelocityY;
					} else if(collisionSides[1] ) {
						i.get('movement').velocity.x = -absVelocityX;
					}  else if(collisionSides[3]) {
						i.get('movement').velocity.x = absVelocityX;
					} else if(collisionSides[0] && collisionSides[1]) {
						i.get('movement').velocity = new Vector(-absVelocityX, absVelocityY);
					} else if(collisionSides[0] && collisionSides[3]) {
						i.get('movement').velocity = new Vector(absVelocityX, absVelocityY);
					} else if(collisionSides[2] && collisionSides[1]) {
						i.get('movement').velocity = new Vector(-absVelocityX, -absVelocityY);
					} else if(collisionSides[2] && collisionSides[3]) {
						i.get('movement').velocity = new Vector(absVelocityX, -absVelocityY);
					}

				}


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