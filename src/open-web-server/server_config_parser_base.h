/* ***********************************************************************
 * Open Web Server
 * (C) 2018 by Yiannis Bourkelis (hello@andama.org)
 *
 * This file is part of Open Web Server.
 *
 * Open Web Server is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Open Web Server is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Open Web Server.  If not, see <http://www.gnu.org/licenses/>.
 * ***********************************************************************/

#ifndef SERVER_CONFIG_PARSER_BASE_H
#define SERVER_CONFIG_PARSER_BASE_H

#include <QString>
#include <unordered_map>
#include "server_config_virtualhost.h"

class ServerConfigParserBase
{
public:
    ServerConfigParserBase();

    //destructor
    virtual ~ServerConfigParserBase();

    //methods
    virtual bool parse_config_file(const QString &filename, std::unordered_map<QString, ServerConfigVirtualHost> &server_config_map);
};

#endif // SERVER_CONFIG_PARSER_BASE_H