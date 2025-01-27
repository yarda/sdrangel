///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2020 Jon Beniston, M7RCE                                        //
// Copyright (C) 2020 Edouard Griffiths, F4EXB                                   //
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


#include <QtPlugin>
#include "plugin/pluginapi.h"

#ifndef SERVER_MODE
#include "rigctlservergui.h"
#endif
#include "rigctlserver.h"
#include "rigctlserverplugin.h"
#include "rigctlserverwebapiadapter.h"

const PluginDescriptor RigCtlServerPlugin::m_pluginDescriptor = {
    RigCtlServer::m_featureId,
	QStringLiteral("RigCtl Server"),
	QStringLiteral("6.18.0"),
	QStringLiteral("(c) Jon Beniston, M7RCE and Edouard Griffiths, F4EXB"),
	QStringLiteral("https://github.com/f4exb/sdrangel"),
	true,
	QStringLiteral("https://github.com/f4exb/sdrangel")
};

RigCtlServerPlugin::RigCtlServerPlugin(QObject* parent) :
	QObject(parent),
	m_pluginAPI(nullptr)
{
}

const PluginDescriptor& RigCtlServerPlugin::getPluginDescriptor() const
{
	return m_pluginDescriptor;
}

void RigCtlServerPlugin::initPlugin(PluginAPI* pluginAPI)
{
	m_pluginAPI = pluginAPI;

	// register RigCtl Server feature
	m_pluginAPI->registerFeature(RigCtlServer::m_featureIdURI, RigCtlServer::m_featureId, this);
}

#ifdef SERVER_MODE
FeatureGUI* RigCtlServerPlugin::createFeatureGUI(FeatureUISet *featureUISet, Feature *feature) const
{
	(void) featureUISet;
	(void) feature;
    return nullptr;
}
#else
FeatureGUI* RigCtlServerPlugin::createFeatureGUI(FeatureUISet *featureUISet, Feature *feature) const
{
	return RigCtlServerGUI::create(m_pluginAPI, featureUISet, feature);
}
#endif

Feature* RigCtlServerPlugin::createFeature(WebAPIAdapterInterface* webAPIAdapterInterface) const
{
    return new RigCtlServer(webAPIAdapterInterface);
}

FeatureWebAPIAdapter* RigCtlServerPlugin::createFeatureWebAPIAdapter() const
{
	return new RigCtlServerWebAPIAdapter();
}
