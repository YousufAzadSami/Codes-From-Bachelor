import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;


public class EventHandling implements MouseListener{
	
	AppletClass aa;
	
	public EventHandling(AppletClass a)
	{
		aa = a;
	}

	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO Auto-generated method stub
		aa.flagChange = true;
		aa.showStatus("what?");
		
	}

	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mousePressed(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

}