/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#ifndef QML_CZMQ_PLUGIN_H
#define QML_CZMQ_PLUGIN_H

#include <QQmlExtensionPlugin>
#include <qqml.h>

class QmlZactor;
class QmlZactorAttached;
class QmlZargs;
class QmlZargsAttached;
class QmlZarmour;
class QmlZarmourAttached;
class QmlZcert;
class QmlZcertAttached;
class QmlZcertstore;
class QmlZcertstoreAttached;
class QmlZchunk;
class QmlZchunkAttached;
class QmlZclock;
class QmlZclockAttached;
class QmlZconfig;
class QmlZconfigAttached;
class QmlZdigest;
class QmlZdigestAttached;
class QmlZdir;
class QmlZdirAttached;
class QmlZdirPatch;
class QmlZdirPatchAttached;
class QmlZfile;
class QmlZfileAttached;
class QmlZframe;
class QmlZframeAttached;
class QmlZhash;
class QmlZhashAttached;
class QmlZhashx;
class QmlZhashxAttached;
class QmlZiflist;
class QmlZiflistAttached;
class QmlZlist;
class QmlZlistAttached;
class QmlZlistx;
class QmlZlistxAttached;
class QmlZloop;
class QmlZloopAttached;
class QmlZmsg;
class QmlZmsgAttached;
class QmlZpoller;
class QmlZpollerAttached;
class QmlZproc;
class QmlZprocAttached;
class QmlZsock;
class QmlZsockAttached;
class QmlZstr;
class QmlZstrAttached;
class QmlZsys;
class QmlZsysAttached;
class QmlZtimerset;
class QmlZtimersetAttached;
class QmlZtrie;
class QmlZtrieAttached;
class QmlZuuid;
class QmlZuuidAttached;
class QmlZhttpClient;
class QmlZhttpClientAttached;

#include "QmlZactor.h"
#include "QmlZargs.h"
#include "QmlZarmour.h"
#include "QmlZcert.h"
#include "QmlZcertstore.h"
#include "QmlZchunk.h"
#include "QmlZclock.h"
#include "QmlZconfig.h"
#include "QmlZdigest.h"
#include "QmlZdir.h"
#include "QmlZdirPatch.h"
#include "QmlZfile.h"
#include "QmlZframe.h"
#include "QmlZhash.h"
#include "QmlZhashx.h"
#include "QmlZiflist.h"
#include "QmlZlist.h"
#include "QmlZlistx.h"
#include "QmlZloop.h"
#include "QmlZmsg.h"
#include "QmlZpoller.h"
#include "QmlZproc.h"
#include "QmlZsock.h"
#include "QmlZstr.h"
#include "QmlZsys.h"
#include "QmlZtimerset.h"
#include "QmlZtrie.h"
#include "QmlZuuid.h"
#include "QmlZhttpClient.h"

class QmlCZMQPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes (const char *uri)
    {
        qmlRegisterType<QmlZactor> (uri, 1, 0, "QmlZactor");
        qmlRegisterType<QmlZactorAttached>();
        qmlRegisterType<QmlZargs> (uri, 1, 0, "QmlZargs");
        qmlRegisterType<QmlZargsAttached>();
        qmlRegisterType<QmlZarmour> (uri, 1, 0, "QmlZarmour");
        qmlRegisterType<QmlZarmourAttached>();
        qmlRegisterType<QmlZcert> (uri, 1, 0, "QmlZcert");
        qmlRegisterType<QmlZcertAttached>();
        qmlRegisterType<QmlZcertstore> (uri, 1, 0, "QmlZcertstore");
        qmlRegisterType<QmlZcertstoreAttached>();
        qmlRegisterType<QmlZchunk> (uri, 1, 0, "QmlZchunk");
        qmlRegisterType<QmlZchunkAttached>();
        qmlRegisterType<QmlZclock> (uri, 1, 0, "QmlZclock");
        qmlRegisterType<QmlZclockAttached>();
        qmlRegisterType<QmlZconfig> (uri, 1, 0, "QmlZconfig");
        qmlRegisterType<QmlZconfigAttached>();
        qmlRegisterType<QmlZdigest> (uri, 1, 0, "QmlZdigest");
        qmlRegisterType<QmlZdigestAttached>();
        qmlRegisterType<QmlZdir> (uri, 1, 0, "QmlZdir");
        qmlRegisterType<QmlZdirAttached>();
        qmlRegisterType<QmlZdirPatch> (uri, 1, 0, "QmlZdirPatch");
        qmlRegisterType<QmlZdirPatchAttached>();
        qmlRegisterType<QmlZfile> (uri, 1, 0, "QmlZfile");
        qmlRegisterType<QmlZfileAttached>();
        qmlRegisterType<QmlZframe> (uri, 1, 0, "QmlZframe");
        qmlRegisterType<QmlZframeAttached>();
        qmlRegisterType<QmlZhash> (uri, 1, 0, "QmlZhash");
        qmlRegisterType<QmlZhashAttached>();
        qmlRegisterType<QmlZhashx> (uri, 1, 0, "QmlZhashx");
        qmlRegisterType<QmlZhashxAttached>();
        qmlRegisterType<QmlZiflist> (uri, 1, 0, "QmlZiflist");
        qmlRegisterType<QmlZiflistAttached>();
        qmlRegisterType<QmlZlist> (uri, 1, 0, "QmlZlist");
        qmlRegisterType<QmlZlistAttached>();
        qmlRegisterType<QmlZlistx> (uri, 1, 0, "QmlZlistx");
        qmlRegisterType<QmlZlistxAttached>();
        qmlRegisterType<QmlZloop> (uri, 1, 0, "QmlZloop");
        qmlRegisterType<QmlZloopAttached>();
        qmlRegisterType<QmlZmsg> (uri, 1, 0, "QmlZmsg");
        qmlRegisterType<QmlZmsgAttached>();
        qmlRegisterType<QmlZpoller> (uri, 1, 0, "QmlZpoller");
        qmlRegisterType<QmlZpollerAttached>();
        qmlRegisterType<QmlZproc> (uri, 1, 0, "QmlZproc");
        qmlRegisterType<QmlZprocAttached>();
        qmlRegisterType<QmlZsock> (uri, 1, 0, "QmlZsock");
        qmlRegisterType<QmlZsockAttached>();
        qmlRegisterType<QmlZstr> (uri, 1, 0, "QmlZstr");
        qmlRegisterType<QmlZstrAttached>();
        qmlRegisterType<QmlZsys> (uri, 1, 0, "QmlZsys");
        qmlRegisterType<QmlZsysAttached>();
        qmlRegisterType<QmlZtimerset> (uri, 1, 0, "QmlZtimerset");
        qmlRegisterType<QmlZtimersetAttached>();
        qmlRegisterType<QmlZtrie> (uri, 1, 0, "QmlZtrie");
        qmlRegisterType<QmlZtrieAttached>();
        qmlRegisterType<QmlZuuid> (uri, 1, 0, "QmlZuuid");
        qmlRegisterType<QmlZuuidAttached>();
        qmlRegisterType<QmlZhttpClient> (uri, 1, 0, "QmlZhttpClient");
        qmlRegisterType<QmlZhttpClientAttached>();
    };
};

#endif

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
