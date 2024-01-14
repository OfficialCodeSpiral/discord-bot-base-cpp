#include <dpp/dpp.h>
#include <commands.hpp>

using namespace std;

void onSlash(dpp::cluster& bot){
	bot.on_slashcommand([&bot](const dpp::slashcommand_t& event) {
        
        if (event.command.get_command_name() == "ping") {
            ping(event, bot);
        }

    });
}