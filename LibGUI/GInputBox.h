#pragma once

#include <LibGUI/GDialog.h>

class GButton;
class GTextEditor;

class GInputBox : public GDialog {
public:
    explicit GInputBox(const String& prompt, const String& title, GObject* parent = nullptr);
    virtual ~GInputBox() override;

    String text_value() const { return m_text_value; }

private:
    void build();
    String m_prompt;
    String m_text_value;

    GButton* m_ok_button { nullptr };
    GButton* m_cancel_button { nullptr };
    GTextEditor* m_text_editor { nullptr };
};
