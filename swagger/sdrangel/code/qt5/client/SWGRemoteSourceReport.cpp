/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGRemoteSourceReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGRemoteSourceReport::SWGRemoteSourceReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRemoteSourceReport::SWGRemoteSourceReport() {
    queue_length = 0;
    m_queue_length_isSet = false;
    queue_size = 0;
    m_queue_size_isSet = false;
    samples_count = 0;
    m_samples_count_isSet = false;
    correctable_errors_count = 0;
    m_correctable_errors_count_isSet = false;
    uncorrectable_errors_count = 0;
    m_uncorrectable_errors_count_isSet = false;
    tv_sec = 0;
    m_tv_sec_isSet = false;
    tv_u_sec = 0;
    m_tv_u_sec_isSet = false;
    nb_original_blocks = 0;
    m_nb_original_blocks_isSet = false;
    nb_fec_blocks = 0;
    m_nb_fec_blocks_isSet = false;
    center_freq = 0L;
    m_center_freq_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    device_center_freq = 0;
    m_device_center_freq_isSet = false;
    device_sample_rate = 0;
    m_device_sample_rate_isSet = false;
}

SWGRemoteSourceReport::~SWGRemoteSourceReport() {
    this->cleanup();
}

void
SWGRemoteSourceReport::init() {
    queue_length = 0;
    m_queue_length_isSet = false;
    queue_size = 0;
    m_queue_size_isSet = false;
    samples_count = 0;
    m_samples_count_isSet = false;
    correctable_errors_count = 0;
    m_correctable_errors_count_isSet = false;
    uncorrectable_errors_count = 0;
    m_uncorrectable_errors_count_isSet = false;
    tv_sec = 0;
    m_tv_sec_isSet = false;
    tv_u_sec = 0;
    m_tv_u_sec_isSet = false;
    nb_original_blocks = 0;
    m_nb_original_blocks_isSet = false;
    nb_fec_blocks = 0;
    m_nb_fec_blocks_isSet = false;
    center_freq = 0L;
    m_center_freq_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    device_center_freq = 0;
    m_device_center_freq_isSet = false;
    device_sample_rate = 0;
    m_device_sample_rate_isSet = false;
}

void
SWGRemoteSourceReport::cleanup() {













}

SWGRemoteSourceReport*
SWGRemoteSourceReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRemoteSourceReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&queue_length, pJson["queueLength"], "qint32", "");
    
    ::SWGSDRangel::setValue(&queue_size, pJson["queueSize"], "qint32", "");
    
    ::SWGSDRangel::setValue(&samples_count, pJson["samplesCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&correctable_errors_count, pJson["correctableErrorsCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&uncorrectable_errors_count, pJson["uncorrectableErrorsCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tv_sec, pJson["tvSec"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tv_u_sec, pJson["tvUSec"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_original_blocks, pJson["nbOriginalBlocks"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_fec_blocks, pJson["nbFECBlocks"], "qint32", "");
    
    ::SWGSDRangel::setValue(&center_freq, pJson["centerFreq"], "qint64", "");
    
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&device_center_freq, pJson["deviceCenterFreq"], "qint32", "");
    
    ::SWGSDRangel::setValue(&device_sample_rate, pJson["deviceSampleRate"], "qint32", "");
    
}

QString
SWGRemoteSourceReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGRemoteSourceReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_queue_length_isSet){
        obj->insert("queueLength", QJsonValue(queue_length));
    }
    if(m_queue_size_isSet){
        obj->insert("queueSize", QJsonValue(queue_size));
    }
    if(m_samples_count_isSet){
        obj->insert("samplesCount", QJsonValue(samples_count));
    }
    if(m_correctable_errors_count_isSet){
        obj->insert("correctableErrorsCount", QJsonValue(correctable_errors_count));
    }
    if(m_uncorrectable_errors_count_isSet){
        obj->insert("uncorrectableErrorsCount", QJsonValue(uncorrectable_errors_count));
    }
    if(m_tv_sec_isSet){
        obj->insert("tvSec", QJsonValue(tv_sec));
    }
    if(m_tv_u_sec_isSet){
        obj->insert("tvUSec", QJsonValue(tv_u_sec));
    }
    if(m_nb_original_blocks_isSet){
        obj->insert("nbOriginalBlocks", QJsonValue(nb_original_blocks));
    }
    if(m_nb_fec_blocks_isSet){
        obj->insert("nbFECBlocks", QJsonValue(nb_fec_blocks));
    }
    if(m_center_freq_isSet){
        obj->insert("centerFreq", QJsonValue(center_freq));
    }
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }
    if(m_device_center_freq_isSet){
        obj->insert("deviceCenterFreq", QJsonValue(device_center_freq));
    }
    if(m_device_sample_rate_isSet){
        obj->insert("deviceSampleRate", QJsonValue(device_sample_rate));
    }

    return obj;
}

qint32
SWGRemoteSourceReport::getQueueLength() {
    return queue_length;
}
void
SWGRemoteSourceReport::setQueueLength(qint32 queue_length) {
    this->queue_length = queue_length;
    this->m_queue_length_isSet = true;
}

qint32
SWGRemoteSourceReport::getQueueSize() {
    return queue_size;
}
void
SWGRemoteSourceReport::setQueueSize(qint32 queue_size) {
    this->queue_size = queue_size;
    this->m_queue_size_isSet = true;
}

qint32
SWGRemoteSourceReport::getSamplesCount() {
    return samples_count;
}
void
SWGRemoteSourceReport::setSamplesCount(qint32 samples_count) {
    this->samples_count = samples_count;
    this->m_samples_count_isSet = true;
}

qint32
SWGRemoteSourceReport::getCorrectableErrorsCount() {
    return correctable_errors_count;
}
void
SWGRemoteSourceReport::setCorrectableErrorsCount(qint32 correctable_errors_count) {
    this->correctable_errors_count = correctable_errors_count;
    this->m_correctable_errors_count_isSet = true;
}

qint32
SWGRemoteSourceReport::getUncorrectableErrorsCount() {
    return uncorrectable_errors_count;
}
void
SWGRemoteSourceReport::setUncorrectableErrorsCount(qint32 uncorrectable_errors_count) {
    this->uncorrectable_errors_count = uncorrectable_errors_count;
    this->m_uncorrectable_errors_count_isSet = true;
}

qint32
SWGRemoteSourceReport::getTvSec() {
    return tv_sec;
}
void
SWGRemoteSourceReport::setTvSec(qint32 tv_sec) {
    this->tv_sec = tv_sec;
    this->m_tv_sec_isSet = true;
}

qint32
SWGRemoteSourceReport::getTvUSec() {
    return tv_u_sec;
}
void
SWGRemoteSourceReport::setTvUSec(qint32 tv_u_sec) {
    this->tv_u_sec = tv_u_sec;
    this->m_tv_u_sec_isSet = true;
}

qint32
SWGRemoteSourceReport::getNbOriginalBlocks() {
    return nb_original_blocks;
}
void
SWGRemoteSourceReport::setNbOriginalBlocks(qint32 nb_original_blocks) {
    this->nb_original_blocks = nb_original_blocks;
    this->m_nb_original_blocks_isSet = true;
}

qint32
SWGRemoteSourceReport::getNbFecBlocks() {
    return nb_fec_blocks;
}
void
SWGRemoteSourceReport::setNbFecBlocks(qint32 nb_fec_blocks) {
    this->nb_fec_blocks = nb_fec_blocks;
    this->m_nb_fec_blocks_isSet = true;
}

qint64
SWGRemoteSourceReport::getCenterFreq() {
    return center_freq;
}
void
SWGRemoteSourceReport::setCenterFreq(qint64 center_freq) {
    this->center_freq = center_freq;
    this->m_center_freq_isSet = true;
}

qint32
SWGRemoteSourceReport::getSampleRate() {
    return sample_rate;
}
void
SWGRemoteSourceReport::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}

qint32
SWGRemoteSourceReport::getDeviceCenterFreq() {
    return device_center_freq;
}
void
SWGRemoteSourceReport::setDeviceCenterFreq(qint32 device_center_freq) {
    this->device_center_freq = device_center_freq;
    this->m_device_center_freq_isSet = true;
}

qint32
SWGRemoteSourceReport::getDeviceSampleRate() {
    return device_sample_rate;
}
void
SWGRemoteSourceReport::setDeviceSampleRate(qint32 device_sample_rate) {
    this->device_sample_rate = device_sample_rate;
    this->m_device_sample_rate_isSet = true;
}


bool
SWGRemoteSourceReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_queue_length_isSet){
            isObjectUpdated = true; break;
        }
        if(m_queue_size_isSet){
            isObjectUpdated = true; break;
        }
        if(m_samples_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_correctable_errors_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_uncorrectable_errors_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tv_sec_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tv_u_sec_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_original_blocks_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_fec_blocks_isSet){
            isObjectUpdated = true; break;
        }
        if(m_center_freq_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_device_center_freq_isSet){
            isObjectUpdated = true; break;
        }
        if(m_device_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

