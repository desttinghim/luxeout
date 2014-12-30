
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;
import luxe.Rectangle;

class Hitbox extends Component {

	private var rectangle:Rectangle;
	private var sprite:Sprite;
	
	public function new( width:Int, height:Int, whichSprite ):Void {

		super({name:"hitbox"});
		rectangle = new Rectangle( 0, 0, width, height);
		sprite = whichSprite;

	}

	override function init():Void {

		//sprite = cast entity;
		
	}

	public function getHitbox():Rectangle {
		rectangle.x = sprite.pos.x - rectangle.w / 2;
		rectangle.y = sprite.pos.y - rectangle.h / 2;
		return rectangle;
	}

}