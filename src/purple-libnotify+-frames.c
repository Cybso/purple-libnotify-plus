/*
 * purple-libnotify+ - Provide libnotify interface to Pidgin and Finch
 * Copyright © 2010-2012 Quentin "Sardem FF7" Glidic
 *
 * This file is part of purple-libnotify+.
 *
 * purple-libnotify+ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * purple-libnotify+ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with purple-libnotify+.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "purple-libnotify+-common.h"

#include "purple-libnotify+-frames.h"

PurplePluginPrefFrame *
notify_plus_pref_frame(PurplePlugin *plugin)
{
	PurplePluginPrefFrame *frame;
	PurplePluginPref *pref;

	frame = purple_plugin_pref_frame_new();

	pref = purple_plugin_pref_new_with_label(
		_("Notification settings:")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/expire-timeout",
		_("Expire timeout (1-120, 0 for never, -1 for auto)")
		);
	purple_plugin_pref_frame_add(frame, pref);
	purple_plugin_pref_set_bounds(pref, -1, 120);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/overlay-scale",
		_("Scale factor for protocol icon (0-100%)")
		);
	purple_plugin_pref_frame_add(frame, pref);
	purple_plugin_pref_set_bounds(pref, 0, 100);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/no-transient",
		_("Do not use transient notifications (if supported)")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-online",
		_("Notify when presence changed to online")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-offline",
		_("Notify when presence changed to offline")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-away",
		_("Notify on away")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-back",
		_("Notify when contact returned")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-idle",
		_("Notify on idle")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-idle-back",
		_("Notify on back from idle")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/presence-message",
		_("Notify when status message changed")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/im-received",
		_("Notify on new IM message")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/im-highlight",
		_("Notify when mentioned in IM message")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/chat-received",
		_("Notify on new chat message")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/chat-highlight",
		_("Notify when mentioned in chat")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/email-arrived",
		_("Notify on email arrived")
		);
	purple_plugin_pref_frame_add(frame, pref);

	pref = purple_plugin_pref_new_with_name_and_label(
		"/plugins/core/libnotify+/authorization-requested",
		_("Notify on authorization request")
		);
	purple_plugin_pref_frame_add(frame, pref);

	return frame;
}
