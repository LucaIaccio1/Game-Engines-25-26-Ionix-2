#pragma once
#include "Architecture/Macros.h"

namespace IonixEngine
{
    enum class IonixEventType
    {
        None = 0,
        WindowClosed,WindowMaximized,WindowMinimized
        // ...
    };

    // Event class
    class IonixEvent
    {
    public:
        IonixEventType Type = IonixEventType::None;
        bool Handled = false;

        IonixEvent(IonixEventType type) : Type(type) {}
        virtual ~IonixEvent() = default;
    };

    // Window Events
    class WindowClosedEvent : public IonixEvent
    {
    public:
        WindowClosedEvent() : IonixEvent(IonixEventType::WindowClosed) {}
    };
    class WindowMaximizedEvent : public IonixEvent
    {
    public:
        WindowMaximizedEvent() : IonixEvent(IonixEventType::WindowMaximized) {}
    };
    class WindowMinimizedEvent : public IonixEvent
    {
    public:
        WindowMinimizedEvent() : IonixEvent(IonixEventType::WindowMinimized) {}
    };

    // .. add more as needed...
}