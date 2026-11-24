// captcha.cpp — part of gmail-regen-no-captcha.

#include "gmailregennocaptcha/captcha.h"

#include <cstdio>

namespace gmailregennocaptcha {

Captcha::Captcha(const std::string& config_path)
    : config_path_(config_path) {}

void Captcha::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Captcha::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-regen-no-captcha] captcha: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailregennocaptcha
