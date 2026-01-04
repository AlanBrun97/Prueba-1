#pragma once

#define PLUG_NAME "Prueba 1 Thrash"
#define PLUG_MFR "TuNombre"
#define PLUG_VERSION_HEX 0x00010000
#define PLUG_VERSION_STR "1.0.0"
#define PLUG_UNIQUE_ID 'P1Th'
#define PLUG_MFR_ID 'Acme'

#define PLUG_INLETS 1
#define PLUG_OUTLETS 2
#define PLUG_LATENCY 0
#define PLUG_TYPE 0
#define PLUG_DOES_MIDI_IN 0
#define PLUG_DOES_MIDI_OUT 0
#define PLUG_HAS_UI 1
#define PLUG_WIDTH 800
#define PLUG_HEIGHT 450
#define PLUG_FPS 60

// Definición de las perillas (Parámetros)
enum EParams
{
  kInputLevel = 0,
  kGateThreshold,
  kToneBass,
  kToneMid,
  kToneTreble,
  kPresence, // <--- TU NUEVA PERILLA DE THRASH
  kOutputLevel,
  kNumParams
};

// Colores para la estética Metal (Rojo sangre y Negro)
#define THRASH_RED IColor(255, 180, 0, 0)
#define THRASH_BLACK IColor(255, 20, 20, 20)
