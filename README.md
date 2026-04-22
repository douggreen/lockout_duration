Lockout Duration
================

Replaces Backdrop core's 6-hour flood-based login lockout with a configurable
fixed-duration lockout (default 15 minutes).

Core's flood control locks an account after 5 failed sign-ins in a 6-hour
rolling window. This module records the lockout time when core fires
`hook_user_flood_control`, enforces the configured duration on the login
form, and clears core's flood events once the window expires so the user
can retry without being pushed back into the rolling 6-hour throttle.


Requirements
------------

Backdrop CMS 1.x. No additional modules.


Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Visit **Administration > Configuration > User accounts > Lockout duration**
  (`admin/config/people/lockout-duration`) to change the duration.


Configuration
-------------

A single setting, `duration`, stored in `lockout_duration.settings` (seconds,
default 900). Valid range: 60 seconds or more.


Unlocking a user before the window expires
------------------------------------------

Either wait it out, or delete the state entry `lockout_duration_<uid>` via
`bee state-delete lockout_duration_<uid>` or the state UI at
`/admin/config/development/state`.


License
-------

GPL-2.0-or-later. See LICENSE.txt.


Maintainers
-----------

- Seeking maintainers — see https://github.com/backdrop-contrib/lockout_duration.
