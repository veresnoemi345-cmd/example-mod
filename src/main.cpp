#include <Geode/Geode.hpp>
#include <Geode/modify/CCTextInputNode.hpp>

using namespace geode::prelude;

class $modify(TextBypass, CCTextInputNode) {

    bool onTextFieldInsertText(CCTextFieldTTF* sender, char const* text, int len) {
        // Accept all characters
        return CCTextInputNode::onTextFieldInsertText(sender, text, len);
    }

    const char* getStringWithMaxLength(const char* text, int maxLen) {
        // Disable GD filtering
        return text;
    }
};
