/*
 * This an unstable interface of wlroots. No guarantees are made regarding the
 * future consistency of this API.
 */
#ifndef WLR_USE_UNSTABLE
#error "Add -DWLR_USE_UNSTABLE to enable unstable wlroots features"
#endif

#ifndef WLR_BACKEND_RDP_H
#define WLR_BACKEND_RDP_H
#include <wlr/backend.h>
#include <wlr/types/wlr_input_device.h>
#include <wlr/types/wlr_output.h>

/**
 * Creates an RDP backend. An RDP backend will create one output, keyboard, and
 * pointer for each client that connects.
 * TODO: add freerdp options like bind port to this
 */
struct wlr_backend *wlr_rdp_backend_create(struct wl_display *display,
	wlr_renderer_create_func_t create_renderer_func);

bool wlr_backend_is_rdp(struct wlr_backend *backend);
bool wlr_input_device_is_rdp(struct wlr_input_device *device);
bool wlr_output_is_rdp(struct wlr_output *output);

#endif