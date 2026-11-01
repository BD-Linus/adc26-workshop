/*
==============================================================================

BEGIN_JUCE_MODULE_DECLARATION

   ID:            plugin
   vendor:        WolfSound
   version:       0.1.0
   name:          Flanger Plugin
   description:   Plugin core
   dependencies:  juce_audio_utils, juce_dsp

   website:       https://thewolfsound.com
   license:       MIT

END_JUCE_MODULE_DECLARATION

==============================================================================
*/

#pragma once
#include <array>
#include <juce_dsp/juce_dsp.h>
#include <ranges>
#include "include/flanger/FractionalDelayLine.h"
#include <wolfsound/common/wolfsound_Frequency.hpp>
#include <wolfsound/common/wolfsound_assert.hpp>
#include "include/flanger/Flanger.h"
#include <juce_audio_processors/juce_audio_processors.h>
#include "include/flanger/PluginProcessor.h"

