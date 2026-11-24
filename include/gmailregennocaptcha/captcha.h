// captcha — part of gmail-regen-no-captcha.

#pragma once

#include <string>
#include <vector>

namespace gmailregennocaptcha {

class Captcha {
public:
    explicit Captcha(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace gmailregennocaptcha
