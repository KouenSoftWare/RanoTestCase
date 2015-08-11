#include <iostream>
#include "EventFactory.h"
#include "Event.h"
#include <string.h>

struct echoEvent:public Event
{
	char msg[32];
};

