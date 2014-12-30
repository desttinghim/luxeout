
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;

class Movement extends Component {

	public var velocity:Vector;
	private var sprite:Sprite;
	private var maxVelocity:Float;
	
	public function new( xspeed, yspeed, maxSpeed, whichSprite ):Void {

		super({name:"movement"});

		velocity = new Vector(xspeed,yspeed);
		maxVelocity = maxSpeed;
		sprite = whichSprite;
	}
	override function init() {
		//the function that started it all
	}

	override function update( dt:Float ) {
		//stuff all the time
		sprite.pos = Vector.Add(sprite.pos, Vector.Multiply( velocity, dt ));
		if(velocity.length > maxVelocity) {
			velocity.length = maxVelocity;
		}
	}

	override function onreset() {
		//when the world restarts
	}

}