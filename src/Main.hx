package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
import luxe.tween.Actuate;
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

		ball1Move = new Movement({name: 'ball1movement' });
		ball1.add(ball1Move);

		paddleCol = Polygon.rectangle(paddle.pos.x,paddle.pos.y,128,32);
		ball1Col = new Circle(ball1.pos.x,ball1.pos.y,16);

		paddle.pos.y = Luxe.screen.h - 16;

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

		ball1Move.velocity.y = 100;
		
		paddleCol.x = paddle.pos.x;
		paddleCol.y = paddle.pos.y;

		ball1Col.x = paddle.pos.x;
		ball1Col.y = ball1.pos.y;

		if(Collision.test( paddleCol, ball1Col ) != null) {
			trace("It's alive!");
		}
		
	}
	
}