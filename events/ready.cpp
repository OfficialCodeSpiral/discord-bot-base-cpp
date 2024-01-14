#include <dpp/dpp.h>

using namespace std;

void onReady(dpp::cluster& bot){
	bot.on_ready([&bot](const dpp::ready_t event){
		if (dpp::run_once<struct register_bot_commands>()) {
            bot.global_command_create(dpp::slashcommand("ping", "Ping pong!", bot.me.id));
			string botName = bot.me.username;
			int botDisc = bot.me.discriminator;
			bot.set_presence(dpp::presence(dpp::ps_dnd, dpp::activity(dpp::activity_type::at_game, "with kids", "sleepy", "https://sex.com")));
			std::cout << "Ready as " << botName << "#" << botDisc << std::endl;
		}
	});
}