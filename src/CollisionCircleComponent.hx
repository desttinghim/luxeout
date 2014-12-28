
import luxe.Component;
import luxe.Sprite;
import luxe.Vector;
import luxe.collision.Collision;
import luxe.collision.CollisionData;
import luxe.collision.shapes.Circle;

class CollisionCircleComponent extends Component {
	
	private var sprite:Sprite;

	public var collisionCircle:Circle;

	override function init() {
		sprite = cast entity;
		collisionCircle = new Circle(0,0,sprite.size.x);

		collisionCircle.x = sprite.pos.x;
		collisionCircle.y = sprite.pos.y;
	}

	override function update( dt:Float ) {
		collisionCircle.x = sprite.pos.x;
		collisionCircle.y = sprite.pos.y;
	}

	override function onreset() {

	}

}