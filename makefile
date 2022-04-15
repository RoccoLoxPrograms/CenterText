# ----------------------------
# Makefile Options
# ----------------------------

NAME = CENTER
ICON = 
DESCRIPTION = "Center Text"
COMPRESSED = YES
ARCHIVED = YES

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
