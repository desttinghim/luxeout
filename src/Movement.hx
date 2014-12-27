
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;

class Movement extends Component {

	public var velocity:Vector;
	private var sprite:Sprite;
	
	override function init() {
		//the function that started it all
		sprite = cast entity;
		velocity = new Vector();
	}

	override function update( dt:Float ) {
		//stuff all the time
		sprite.pos = Vector.Add(sprite.pos, Vector.Multiply( velocity, dt));
	}

	override function onreset() {
		//when the world restarts
	}

}