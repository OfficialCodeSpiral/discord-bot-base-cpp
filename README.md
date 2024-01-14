# C++ Discord Bot Template

![C++ Discord Bot Template Banner](https://github.com/OfficialCodeSpiral/discord-bot-base-cpp/blob/assets/banner.png)

A simple Discord bot template written in C++ to help you kickstart your own Discord bot project. This template provides a foundation for building a bot with basic functionality.

## Features

- **Command Handling**: Easily add and handle commands.
- **Event System**: Respond to Discord events efficiently.
- **C++**: Written in C++ for performance and flexibility.

## Prerequisites

Before you start, ensure you have the following installed:

If you're on windows, use Visual Studio (NOT CODE!!!) or Windows Subsystem for Linux (WSL).

- [C++ Compiler](https://gcc.gnu.org)
- [Discord API Library](https://dpp.dev)
- [Your Bot Token](https://discord.com/developers/applications)

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/OfficialCodeSpiral/discord-bot-base-cpp.git
   ```

2. Build the bot:
   ```bash
   cd discord-bot-base-cpp
   make
   ```

3. Configure your bot:
   - Rename `config.example.json` to `config.json`.
   - Replace `YOUR_BOT_TOKEN` with your actual bot token in `config.json`.

4. Run your bot:
   ```bash
   ./your-bot-executable
   ```

## Usage

- Add your commands in the `src/commands` directory.
- Customize and extend the bot as per your requirements.

## Contributors

This project is maintained by [SkyOPG](https://github.com/SkyOPG) and contributors.

## Support or Contact

For any questions or issues, please [create an issue](https://github.com/OfficialCodeSpiral/discord-bot-base-cpp/issues) in the repository.

## License

This Discord Bot Template is under the [MIT License](https://github.com/OfficialCodeSpiral/discord-bot-base-cpp/blob/main/LICENSE).
