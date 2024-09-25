#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "cmsis_os.h"

extern "C"
{
	extern osMessageQueueId_t noteQueueHandle;
	extern osMessageQueueId_t stateQueueHandle;
	extern osMessageQueueId_t soundQueueHandle;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	int counter = 0;
	osStatus_t status = osMessageQueueGet(soundQueueHandle, &counter, NULL, 0U); //wait for message
	if(status == osOK) {
		modelListener->updateCount(counter);
	}
}

void Model::sendNote(int note) {
	newnote = note;
	osMessageQueuePut(noteQueueHandle, &newnote, 0U, 0U);
}

void Model::sendState(int state) {
	newstate = state;
	osMessageQueuePut(stateQueueHandle, &newstate, 0U, 0U);
}
