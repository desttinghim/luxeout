package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
import luxe.tween.Actuate;
import luxe.collision.shapes.Shape;
import luxe.collision.shapes.Polygon;
import luxe.collision.shapes.Circle;
import luxe.collision.CollisionData;
import luxe.collision.Collision;
/**
 * @author Desttinghim
 * null
 * null
 */
class Main extends luxe.Game
{
	private var paddle:Sprite;
	private var ball1:Sprite;
	private var ball1Move:Movement;

	private var paddleCol:Polygon;
	private var ball1Col:Circle;

	private var once:Bool = true;

	override function ready() {

		paddle = new Sprite({
			name: 'paddle',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(128, 32)
		});

		ball1 = new Sprite({
			name: 'ball1',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xffffff),
			size: new Vector(16,16)
		});

		paddle.add(new CollisionRectComponent({name: "collisionrect"}));
		ball1.add(new Movement({name: 'movement'}));
		ball1.add(new CollisionCircleComponent({name: "collisioncircle"}));

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
		
		var move:Movement = cast ball1.get('movement');
		var col1:Shape = cast paddle.get('collisionrect').collisionRect;
		var col2:Shape = cast ball1.get('collisioncircle').collisionCircle;

		if(once) {
			move.velocity.y = -200;
			once = false;
		}
		

		var testcollision;
		testcollision = Collision.test( col1, col2 );
		
		if(testcollision != null) {
			move.velocity = Vector.Multiply(move.velocity, -1);
			// ball1.pos = Vector.Subtract(ball1.pos, testcollision.separation);
		}

		if(ball1.pos.x > Luxe.screen.w || ball1.pos.x < 0 || ball1.pos.y < 0) {
			move.velocity = Vector.Multiply(move.velocity, -1);
		}
	}
	
}