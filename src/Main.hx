package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;

/**
 * @author null
 * null
 * null
 */
class Main extends luxe.Game
{
	var block:Sprite;
	
	override function ready() {
		
		block = new Sprite({
			name: 'block',
			pos: Luxe.screen.mid,
			color: new Color().rgb(0xf94b04),
			size: new Vector(128, 128)
		});
		
	}
	
	override function onmousemove( event:MouseEvent ) {
		
		block.pos = event.pos;
		
	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape ) {
			Luxe.shutdown();
		}
		
	}
	
	override function update( delta:Float ) {
		
		block.rotation_z += 40*delta;
		
	}
	
}