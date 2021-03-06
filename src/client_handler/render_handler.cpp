// Copyright (c) 2016 CEF Python. See the Authors and License files.

#include "render_handler.h"


bool RenderHandler::GetRootScreenRect(CefRefPtr<CefBrowser> browser,
                                      CefRect& rect)
{
    REQUIRE_UI_THREAD();
    return RenderHandler_GetRootScreenRect(browser, rect);
}


bool RenderHandler::GetViewRect(CefRefPtr<CefBrowser> browser,
                                CefRect& rect)
{
    REQUIRE_UI_THREAD();
    return RenderHandler_GetViewRect(browser, rect);
}


bool RenderHandler::GetScreenPoint(CefRefPtr<CefBrowser> browser,
                                   int viewX,
                                   int viewY,
                                   int& screenX,
                                   int& screenY)
{
    REQUIRE_UI_THREAD();
    return RenderHandler_GetScreenPoint(browser, viewX, viewY, screenX,
                                        screenY);
}


bool RenderHandler::GetScreenInfo(CefRefPtr<CefBrowser> browser,
                                  CefScreenInfo& screen_info)
{
    REQUIRE_UI_THREAD();
    return RenderHandler_GetScreenInfo(browser, screen_info);
}


void RenderHandler::OnPopupShow(CefRefPtr<CefBrowser> browser,
                                bool show)
{
    REQUIRE_UI_THREAD();
    RenderHandler_OnPopupShow(browser, show);
}


void RenderHandler::OnPopupSize(CefRefPtr<CefBrowser> browser,
                                const CefRect& rect)
{
    REQUIRE_UI_THREAD();
    RenderHandler_OnPopupSize(browser, rect);
}


void RenderHandler::OnPaint(CefRefPtr<CefBrowser> browser,
                            PaintElementType type,
                            const RectList& dirtyRects,
                            const void* buffer,
                            int width, int height)
{
    REQUIRE_UI_THREAD();
    RenderHandler_OnPaint(browser, type, const_cast<RectList&>(dirtyRects),
                          buffer, width, height);
}


void RenderHandler::OnCursorChange(CefRefPtr<CefBrowser> browser,
                                   CefCursorHandle cursor,
                                   CursorType type,
                                   const CefCursorInfo& custom_cursor_info)
{
    REQUIRE_UI_THREAD();
    RenderHandler_OnCursorChange(browser, cursor);
}


void RenderHandler::OnScrollOffsetChanged(CefRefPtr<CefBrowser> browser,
                                          double x,
                                          double y)
{
    REQUIRE_UI_THREAD();
    RenderHandler_OnScrollOffsetChanged(browser);
}


bool RenderHandler::StartDragging(CefRefPtr<CefBrowser> browser,
                                  CefRefPtr<CefDragData> drag_data,
                                  DragOperationsMask allowed_ops,
                                  int x,
                                  int y)
{
    REQUIRE_UI_THREAD();
    return RenderHandler_StartDragging(browser, drag_data,
                                       static_cast<long>(allowed_ops), x, y);
}


void RenderHandler::UpdateDragCursor(CefRefPtr<CefBrowser> browser,
                                     DragOperation operation)
{
    REQUIRE_UI_THREAD();
    RenderHandler_UpdateDragCursor(browser, static_cast<long>(operation));
}
