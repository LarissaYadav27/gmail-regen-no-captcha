// regen.cpp — part of gmail-regen-no-captcha.

#include "gmailregennocaptcha/regen.h"

#include <cstdio>

namespace gmailregennocaptcha {

Regen::Regen(const std::string& config_path)
    : config_path_(config_path) {}

void Regen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Regen::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-regen-no-captcha] regen: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailregennocaptcha
