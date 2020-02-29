// Generated by scripts/generate_command_definition.py

#include "main.command.h"

struct TransferCommand_0 : Command {
	CommandParameterProxy<std::string> server;
	CommandParameterProxy<int> port;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		TransferCommand context {origin, output};
		context.invoke(server, port);
	}
};

void register_commands() {
	auto &instance = CustomCommandRegistry::getInstance();
	{
		auto &cmd = instance.registerCommand<TransferCommand>();
		{
			auto &ovl = cmd.registerOverload<TransferCommand_0>();
			ovl.addParameter<std::string>("server", false, offsetof(TransferCommand_0, server));
			ovl.addParameter<int>("port", false, offsetof(TransferCommand_0, port));
		}
	}
}
