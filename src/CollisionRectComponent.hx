
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;
import luxe.collision.Collision;
import luxe.collision.CollisionData;
import luxe.collision.shapes.Polygon;

class CollisionRectComponent extends Component {
	
	private var sprite:Sprite;

	public var collisionBox:Polygon;

	override function init() {
		sprite = cast entity;
		collisionBox = Polygon.rectangle(0,0,sprite.size.x,sprite.size.y);

		collisionBox.x = sprite.pos.x;
		collisionBox.y = sprite.pos.y;
	}

	override function update( dt:Float ) {
		//do stuff
		collisionBox.x = sprite.pos.x;
		collisionBox.y = sprite.pos.y;
	}

	override function onreset() {
		//do stuff
	}

}