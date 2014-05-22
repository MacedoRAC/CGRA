#include "TPinterface.h"
#include "LightingScene.h"

TPinterface::TPinterface()
{
	testVar=0;
}


void TPinterface::processKeyboard(unsigned char key, int x, int y)
{
	// Uncomment below if you would like to process the default keys (e.g. 's' for snapshot, 'Esc' for exiting, ...)
	CGFinterface::processKeyboard(key, x, y);

	switch(key)
	{
		case 'a':
		{
			// This is an example of accessing the associated scene
			// To test, create the function toggleSomething in your scene to activate/deactivate something
			((LightingScene *) scene)->toggleSomething();
			break;
		}
		case 'j':
			((LightingScene *) scene)->robot->rotate(1);
			break;
		case 'l':
			((LightingScene *) scene)->robot->rotate(0);
			break;
		case 'i':
			((LightingScene *) scene)->robot->moveForward();
			break;
		case 'k':
			((LightingScene *) scene)->robot->moveBack();
			break;
	}
}

void TPinterface::initGUI()
{
	/*
	// Check CGFinterface.h and GLUI documentation for the types of controls available
	GLUI_Panel *varPanel= addPanel("Group", 1);
	addSpinnerToPanel(varPanel, "Val 1(interface)", 2, &testVar, 1);
	
	// You could also pass a reference to a variable from the scene class, if public
	addSpinnerToPanel(varPanel, "Val 2(scene)", 2, &(((LightingScene*) scene)->sceneVar), 2);
	*/

	GLUI_Panel *lights = addPanel("Lights", 1);
		addCheckboxToPanel(lights, "Light 1", &(((LightingScene*) scene)->l0), 0);
		addCheckboxToPanel(lights, "Light 2", &(((LightingScene*) scene)->l1), 1);
		addCheckboxToPanel(lights, "Light 3", &(((LightingScene*) scene)->l2), 2);
		addCheckboxToPanel(lights, "Light 4", &(((LightingScene*) scene)->l3), 3);

	addColumn();

	addButton("Clock", 4);
}

void TPinterface::processGUI(GLUI_Control *ctrl)
{
	printf ("GUI control id: %d\n  ",ctrl->user_id);
	switch (ctrl->user_id){
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			((LightingScene*) scene)->setClockSwitcher();
			break;
	};

	
}

