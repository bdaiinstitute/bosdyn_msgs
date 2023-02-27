#!/usr/bin/env bash

# enable emulating aarch64 
docker run --rm --privileged multiarch/qemu-user-static --reset -p yes
docker stop earthly-buildkitd || true

mkdir -p build
earthly --platform=linux/arm64 -i +build-bloom-container-native
