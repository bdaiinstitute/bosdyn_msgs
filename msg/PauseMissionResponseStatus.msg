# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Invalid status, do not use.
int8 STATUS_UNKNOWN=0
# Mission is paused or finished running.
int8 STATUS_OK=1
# No mission has started playing.
# NOT returned when two PauseMissionRequests are received back-to-back. In that case,
# you will get STATUS_OK.
int8 STATUS_NO_MISSION_PLAYING=2

int8 value
