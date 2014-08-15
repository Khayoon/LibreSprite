// Aseprite UI Library
// Copyright (C) 2001-2013  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef UI_LISTITEM_H_INCLUDED
#define UI_LISTITEM_H_INCLUDED
#pragma once

#include "ui/widget.h"

namespace ui {

  class ListItem : public Widget
  {
  public:
    ListItem(const std::string& text);

    const std::string& getValue() { return m_value; }

    void setValue(const std::string& value) {
      m_value = value;
    }

  protected:
    void onPaint(PaintEvent& ev) override;
    void onResize(ResizeEvent& ev) override;
    void onPreferredSize(PreferredSizeEvent& ev) override;

  private:
    std::string m_value;
  };

} // namespace ui

#endif