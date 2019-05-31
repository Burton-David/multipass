/*
 * Copyright (C) 2017-2019 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_VIRTUAL_MACHINE_DESCRIPTION_H
#define MULTIPASS_VIRTUAL_MACHINE_DESCRIPTION_H

#include <multipass/memory_size.h>
#include <multipass/vm_image.h>
#include <string>

#include <QMetaType>

namespace multipass
{
class SSHKeyProvider;
class VirtualMachineDescription
{
public:
    using MBytes = size_t;

    int num_cores;
    MemorySize mem_size;
    MemorySize disk_space;
    std::string vm_name;
    std::string mac_addr;
    std::string ssh_username;
    VMImage image;
    Path cloud_init_iso;
};
} // namespace multipass

Q_DECLARE_METATYPE(multipass::VirtualMachineDescription)

#endif // MULTIPASS_VIRTUAL_MACHINE_DESCRIPTION_H
