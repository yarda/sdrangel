///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2022 Edouard Griffiths, F4EXB                                   //
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

#include <QColor>

#include "util/simpleserializer.h"
#include "settings/serializable.h"

#include "jogdialcontrollersettings.h"

const QStringList JogdialControllerSettings::m_channelTypes = {
    QStringLiteral("AISDemod"),
    QStringLiteral("AISMod"),
    QStringLiteral("AMDemod"),
    QStringLiteral("AMMod"),
    QStringLiteral("DABDemod"),
    QStringLiteral("DSDDemod"),
    QStringLiteral("NFMDemod"),
    QStringLiteral("NFMMod"),
    QStringLiteral("PacketDemod"),
    QStringLiteral("PacketMod"),
    QStringLiteral("SSBDemod"),
    QStringLiteral("SSBMod"),
    QStringLiteral("WFMDemod"),
    QStringLiteral("WFMMod"),
};

const QStringList JogdialControllerSettings::m_channelURIs = {
    QStringLiteral("sdrangel.channel.aisdemod"),
    QStringLiteral("sdrangel.channel.modais"),
    QStringLiteral("sdrangel.channel.amdemod"),
    QStringLiteral("sdrangel.channeltx.modam"),
    QStringLiteral("sdrangel.channel.dabdemod"),
    QStringLiteral("sdrangel.channel.dsddemod"),
    QStringLiteral("sdrangel.channel.nfmdemod"),
    QStringLiteral("sdrangel.channeltx.modnfm"),
    QStringLiteral("sdrangel.channel.packetdemod"),
    QStringLiteral("sdrangel.channeltx.modpacket"),
    QStringLiteral("sdrangel.channel.ssbdemod"),
    QStringLiteral("sdrangel.channeltx.modssb"),
    QStringLiteral("sdrangel.channel.wfmdemod"),
    QStringLiteral("sdrangel.channeltx.modwfm"),
};

JogdialControllerSettings::JogdialControllerSettings() :
    m_rollupState(nullptr)
{
    resetToDefaults();
}

void JogdialControllerSettings::resetToDefaults()
{
    m_title = "Jogdial Controller";
    m_rgbColor = QColor(3, 198, 252).rgb();
    m_useReverseAPI = false;
    m_reverseAPIAddress = "127.0.0.1";
    m_reverseAPIPort = 8888;
    m_reverseAPIFeatureSetIndex = 0;
    m_reverseAPIFeatureIndex = 0;
}

QByteArray JogdialControllerSettings::serialize() const
{
    SimpleSerializer s(1);

    s.writeString(5, m_title);
    s.writeU32(6, m_rgbColor);
    s.writeBool(7, m_useReverseAPI);
    s.writeString(8, m_reverseAPIAddress);
    s.writeU32(9, m_reverseAPIPort);
    s.writeU32(10, m_reverseAPIFeatureSetIndex);
    s.writeU32(11, m_reverseAPIFeatureIndex);

    if (m_rollupState) {
        s.writeBlob(12, m_rollupState->serialize());
    }

    return s.final();
}

bool JogdialControllerSettings::deserialize(const QByteArray& data)
{
    SimpleDeserializer d(data);

    if (!d.isValid())
    {
        resetToDefaults();
        return false;
    }

    if (d.getVersion() == 1)
    {
        QByteArray bytetmp;
        uint32_t utmp;
        QString strtmp;

        d.readString(5, &m_title, "Jogdial Controller");
        d.readU32(6, &m_rgbColor, QColor(3, 198, 252).rgb());
        d.readBool(7, &m_useReverseAPI, false);
        d.readString(8, &m_reverseAPIAddress, "127.0.0.1");
        d.readU32(9, &utmp, 0);

        if ((utmp > 1023) && (utmp < 65535)) {
            m_reverseAPIPort = utmp;
        } else {
            m_reverseAPIPort = 8888;
        }

        d.readU32(10, &utmp, 0);
        m_reverseAPIFeatureSetIndex = utmp > 99 ? 99 : utmp;
        d.readU32(11, &utmp, 0);
        m_reverseAPIFeatureIndex = utmp > 99 ? 99 : utmp;

        if (m_rollupState)
        {
            d.readBlob(12, &bytetmp);
            m_rollupState->deserialize(bytetmp);
        }

        return true;
    }
    else
    {
        resetToDefaults();
        return false;
    }
}
