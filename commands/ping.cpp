#include <dpp/dpp.h>

void ping(dpp::slashcommand_t event, dpp::cluster& bot){
	event.reply("Pong!");
}