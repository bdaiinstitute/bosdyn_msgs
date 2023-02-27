#!/usr/bin/env bash

# enable emulating aarch64 
docker run --rm --privileged multiarch/qemu-user-static --reset -p yes
docker stop earthly-buildkitd || true

# to avoid log truncation (`+build | [output clipped, log limit 2MiB reached]`), see
# https://github.com/earthly/earthly/issues/2714#issuecomment-1442515363

mkdir -p build
earthly --platform=linux/arm64 -i +build-bloom-container-native