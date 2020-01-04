
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtNetworkExternals)
#define HDR_gsiQtNetworkExternals

#include "gsiClass.h"
#include "gsiQtNetworkCommon.h"

class QAbstractNetworkCache;

namespace tl { template <> struct type_traits<QAbstractNetworkCache> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QAbstractNetworkCache> &qtdecl_QAbstractNetworkCache (); }

class QAbstractSocket;

namespace tl { template <> struct type_traits<QAbstractSocket> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QAbstractSocket> &qtdecl_QAbstractSocket (); }

class QAuthenticator;

namespace tl { template <> struct type_traits<QAuthenticator> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QAuthenticator> &qtdecl_QAuthenticator (); }

class QFtp;

namespace tl { template <> struct type_traits<QFtp> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QFtp> &qtdecl_QFtp (); }

class QHostAddress;

namespace tl { template <> struct type_traits<QHostAddress> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QHostAddress> &qtdecl_QHostAddress (); }

class QHostInfo;

namespace tl { template <> struct type_traits<QHostInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QHostInfo> &qtdecl_QHostInfo (); }

class QIPv6Address;

namespace tl { template <> struct type_traits<QIPv6Address> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QIPv6Address> &qtdecl_QIPv6Address (); }

class QLocalServer;

namespace tl { template <> struct type_traits<QLocalServer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QLocalServer> &qtdecl_QLocalServer (); }

class QLocalSocket;

namespace tl { template <> struct type_traits<QLocalSocket> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QLocalSocket> &qtdecl_QLocalSocket (); }

class QNetworkAccessManager;

namespace tl { template <> struct type_traits<QNetworkAccessManager> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkAccessManager> &qtdecl_QNetworkAccessManager (); }

class QNetworkAddressEntry;

namespace tl { template <> struct type_traits<QNetworkAddressEntry> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkAddressEntry> &qtdecl_QNetworkAddressEntry (); }

class QNetworkCacheMetaData;

namespace tl { template <> struct type_traits<QNetworkCacheMetaData> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkCacheMetaData> &qtdecl_QNetworkCacheMetaData (); }

class QNetworkCookie;

namespace tl { template <> struct type_traits<QNetworkCookie> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkCookie> &qtdecl_QNetworkCookie (); }

class QNetworkCookieJar;

namespace tl { template <> struct type_traits<QNetworkCookieJar> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkCookieJar> &qtdecl_QNetworkCookieJar (); }

class QNetworkDiskCache;

namespace tl { template <> struct type_traits<QNetworkDiskCache> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkDiskCache> &qtdecl_QNetworkDiskCache (); }

class QNetworkInterface;

namespace tl { template <> struct type_traits<QNetworkInterface> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkInterface> &qtdecl_QNetworkInterface (); }

class QNetworkProxy;

namespace tl { template <> struct type_traits<QNetworkProxy> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkProxy> &qtdecl_QNetworkProxy (); }

class QNetworkProxyFactory;

namespace tl { template <> struct type_traits<QNetworkProxyFactory> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkProxyFactory> &qtdecl_QNetworkProxyFactory (); }

class QNetworkProxyQuery;

namespace tl { template <> struct type_traits<QNetworkProxyQuery> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkProxyQuery> &qtdecl_QNetworkProxyQuery (); }

class QNetworkReply;

namespace tl { template <> struct type_traits<QNetworkReply> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkReply> &qtdecl_QNetworkReply (); }

class QNetworkRequest;

namespace tl { template <> struct type_traits<QNetworkRequest> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkRequest> &qtdecl_QNetworkRequest (); }

class QSslCertificate;

namespace tl { template <> struct type_traits<QSslCertificate> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslCertificate> &qtdecl_QSslCertificate (); }

class QSslCipher;

namespace tl { template <> struct type_traits<QSslCipher> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslCipher> &qtdecl_QSslCipher (); }

class QSslConfiguration;

namespace tl { template <> struct type_traits<QSslConfiguration> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslConfiguration> &qtdecl_QSslConfiguration (); }

class QSslError;

namespace tl { template <> struct type_traits<QSslError> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslError> &qtdecl_QSslError (); }

class QSslKey;

namespace tl { template <> struct type_traits<QSslKey> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslKey> &qtdecl_QSslKey (); }

class QSslSocket;

namespace tl { template <> struct type_traits<QSslSocket> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QSslSocket> &qtdecl_QSslSocket (); }

class QTcpServer;

namespace tl { template <> struct type_traits<QTcpServer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QTcpServer> &qtdecl_QTcpServer (); }

class QTcpSocket;

namespace tl { template <> struct type_traits<QTcpSocket> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QTcpSocket> &qtdecl_QTcpSocket (); }

class QUdpSocket;

namespace tl { template <> struct type_traits<QUdpSocket> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QUdpSocket> &qtdecl_QUdpSocket (); }

class QUrlInfo;

namespace tl { template <> struct type_traits<QUrlInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTNETWORK_PUBLIC gsi::Class<QUrlInfo> &qtdecl_QUrlInfo (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

