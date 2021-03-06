#ifndef GF1_MUSIC_H
#define GF1_MUSIC_H
//****************************************************************************
//**
//**    GF1_Music.h
//**
//**    Copyright (c) 2003 QANTM Australia CMC Pty Ltd
//**
//**    Author:  Dale Freya
//**    Created: 28/11/2003
//**
//****************************************************************************
#include <GF1_Def.h>


   namespace GF1
   {
      // =====================================================================
      // Music
      // =====================================================================
      // This class represents a sequenced music format and supports:
      //   - .MOD (protracker/fasttracker modules)
      //   - .S3M (screamtracker 3 modules)
      //   - .XM (fasttracker 2 modules)
      //   - .IT (impulse tracker modules)
      //   - .MID (MIDI files)
      //   - .RMI (MIDI files)
      //   - .SGT (DirectMusic segment files)
      //   - .FSB (FMOD Sample Bank files)
      // =====================================================================
      struct MusicImpl;

      class GF1_API Music
      {
      public:
         //-------------------------------------------------------------------
         // Constructor
         //-------------------------------------------------------------------
         // Creates a music sequence.  When created the sequence is not 
         // playing.
         //
         // musicFileName
         //    Filename/path of the music.
         //-------------------------------------------------------------------
         Music(const char *fileName);


         //-------------------------------------------------------------------
         // Copy Constructor
         //-------------------------------------------------------------------
         // rhs
         //    The music being copied.
         //-------------------------------------------------------------------
         Music(const Music &rhs);


         //-------------------------------------------------------------------
         // Destructor
         //-------------------------------------------------------------------
         ~Music();


         //-------------------------------------------------------------------
         // Bad
         //-------------------------------------------------------------------
         // Returns true if the music failed to load.
         //-------------------------------------------------------------------
         bool Bad() const;


         //-------------------------------------------------------------------
         // GetFileName
         //-------------------------------------------------------------------
         // Returns the filename of the music.
         //-------------------------------------------------------------------
         const char *GetFileName() const;


         //-------------------------------------------------------------------
         // IsPlaying
         //-------------------------------------------------------------------
         // Returns true if the music is currently playing.
         //-------------------------------------------------------------------
         bool IsPlaying() const;


         //-------------------------------------------------------------------
         // IsLooped
         //-------------------------------------------------------------------
         // Returns true if the music is looped.
         //-------------------------------------------------------------------
         bool IsLooped() const;


         //-------------------------------------------------------------------
         // IsPaused
         //-------------------------------------------------------------------
         // Returns true if the music is paused.
         //-------------------------------------------------------------------
         bool IsPaused() const;


         //-------------------------------------------------------------------
         // Play
         //-------------------------------------------------------------------
         // Play the music.
         //-------------------------------------------------------------------
         void Play();


         //-------------------------------------------------------------------
         // Stop
         //-------------------------------------------------------------------
         // Stop the music.
         //-------------------------------------------------------------------
         void Stop();


         //-------------------------------------------------------------------
         // Pause
         //-------------------------------------------------------------------
         // Pause or unpause the sound.
         //-------------------------------------------------------------------
         void Pause(bool pause);


         //-------------------------------------------------------------------
         // SetLooped
         //-------------------------------------------------------------------
         // Specify whether the music should be looped or not.
         //
         // looped
         //    true if the music should be looped, otherwise false.
         //-------------------------------------------------------------------
         void SetLooped(bool looped);

      private:
         MusicImpl *m_impl;
      };

   }  // end namespace GF1



//****************************************************************************
//**
//**   END INTERFACE
//**
//****************************************************************************
#endif
