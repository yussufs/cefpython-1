# Copyright (c) 2012-2014 The CEF Python authors. All rights reserved.
# License: New BSD License.
# Website: http://code.google.com/p/cefpython/

from cef_string cimport CefString
# noinspection PyUnresolvedReferences
from multimap cimport multimap as cpp_multimap
from libcpp cimport bool as cpp_bool
from cef_ptr cimport CefRefPtr

cdef extern from "include/cef_response.h":
    ctypedef cpp_multimap[CefString, CefString] CefResponseHeaderMap

    cdef CefRefPtr[CefResponse] CefResponse_Create "CefResponse::Create"()

    cdef cppclass CefResponse:
        cpp_bool IsReadOnly()
        int GetStatus()
        void SetStatus(int status)
        CefString GetStatusText()
        void SetStatusText(CefString& statusText)
        CefString GetMimeType()
        void SetMimeType(CefString& mimeType)
        CefString GetHeader(CefString& name)
        void GetHeaderMap(CefResponseHeaderMap& headerMap)
        void SetHeaderMap(CefResponseHeaderMap& headerMap)
