#pragma once
#include <dpp/cluster.h>

void onReady(dpp::cluster& bot);

void useEvents(dpp::cluster& bot){
		onReady(bot);
}