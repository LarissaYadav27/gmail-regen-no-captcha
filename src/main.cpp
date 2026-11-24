// main.cpp — entry point. Wires config and subsystems together.

#include "gmailregennocaptcha/settings.h"
#include "gmailregennocaptcha/regen.h"
#include "gmailregennocaptcha/captcha.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gmailregennocaptcha::Settings settings = gmailregennocaptcha::Settings::load_default();
    gmailregennocaptcha::Regen regen(settings.store_path);
    gmailregennocaptcha::Captcha captcha(settings.store_path);
    std::fprintf(stderr, "[gmail-regen-no-captcha] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
