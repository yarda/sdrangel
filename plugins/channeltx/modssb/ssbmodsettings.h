///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef PLUGINS_CHANNELTX_MODSSB_SSBMODSETTINGS_H_
#define PLUGINS_CHANNELTX_MODSSB_SSBMODSETTINGS_H_

#include <QByteArray>
#include <QString>
#include <stdint.h>

#include "dsp/cwkeyersettings.h"

class Serializable;

struct SSBModSettings
{
    typedef enum
    {
        SSBModInputNone,
        SSBModInputTone,
        SSBModInputFile,
        SSBModInputAudio,
        SSBModInputCWTone
    } SSBModInputAF;

    static const int m_nbAGCTimeConstants;
    static const int m_agcTimeConstant[];

    qint64 m_inputFrequencyOffset;
    Real m_bandwidth;
    Real m_lowCutoff;
    bool m_usb;
    float m_toneFrequency;
    float m_volumeFactor;
    int  m_spanLog2;
    bool m_audioBinaural;
    bool m_audioFlipChannels;
    bool m_dsb;
    bool m_audioMute;
    bool m_playLoop;
    bool m_agc;
    int m_cmpPreGainDB;
    int m_cmpThresholdDB;
    quint32 m_rgbColor;

    QString m_title;
    SSBModInputAF m_modAFInput;
    QString m_audioDeviceName;         //!< This is the audio device you get the audio samples from
    QString m_feedbackAudioDeviceName; //!< This is the audio device you send the audio samples to for audio feedback
    float m_feedbackVolumeFactor;
    bool m_feedbackAudioEnable;
    int m_streamIndex;

    bool m_useReverseAPI;
    QString m_reverseAPIAddress;
    uint16_t m_reverseAPIPort;
    uint16_t m_reverseAPIDeviceIndex;
    uint16_t m_reverseAPIChannelIndex;

    Serializable *m_channelMarker;
    Serializable *m_spectrumGUI;
    Serializable *m_cwKeyerGUI;

    CWKeyerSettings m_cwKeyerSettings; //!< For standalone deserialize operation (without m_cwKeyerGUI)
    Serializable *m_rollupState;

    SSBModSettings();
    void resetToDefaults();
    void setChannelMarker(Serializable *channelMarker) { m_channelMarker = channelMarker; }
    void setRollupState(Serializable *rollupState) { m_rollupState = rollupState; }
    void setSpectrumGUI(Serializable *spectrumGUI) { m_spectrumGUI = spectrumGUI; }
    void setCWKeyerGUI(Serializable *cwKeyerGUI) { m_cwKeyerGUI = cwKeyerGUI; }
    QByteArray serialize() const;
    bool deserialize(const QByteArray& data);
    const CWKeyerSettings& getCWKeyerSettings() const { return m_cwKeyerSettings; }
    void setCWKeyerSettings(const CWKeyerSettings& cwKeyerSettings) { m_cwKeyerSettings = cwKeyerSettings; }
};


#endif /* PLUGINS_CHANNELTX_MODSSB_SSBMODSETTINGS_H_ */
