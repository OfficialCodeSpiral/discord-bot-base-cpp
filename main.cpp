/*
        This is a Discord bot base made in DPP: The C++ Discord bot library
                        Author: SkyOPG - a CodeSpiral Student
                                Powered by CodeSpiral
*/
#include <dpp/cluster.h>
#include <dpp/once.h>
#include <readfile.hpp>
#include <events.hpp>

int main() {
    dpp::cluster bot(readFile("./config/token.txt"));
    useEvents(bot);
    bot.start(dpp::st_wait);
}