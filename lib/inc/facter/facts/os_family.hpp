/**
 * @file
 * Declares the operating system family constants.
 */
#pragma once

namespace facter { namespace facts {

    /**
     * Stores the constant operating system family names.
     */
    struct os_family
    {
        /**
         * The RedHat family of operating systems.
         */
        constexpr static char const* redhat = "RedHat";
        /**
         * The Debian family of operating systems.
         */
        constexpr static char const* debian = "Debian";
        /**
         * The SuSE family of operating systems.
         */
        constexpr static char const* suse = "Suse";
        /**
         * The Solaris family of operating systems.
         */
        constexpr static char const* solaris = "Solaris";
        /**
         * The SunOS family of operating systems.
         */
        constexpr static char const* sunos = "SunOS";
        /**
         * The Gentoo family of operating systems.
         */
        constexpr static char const* gentoo = "Gentoo";
        /**
         * The Archlinux family of operating systems.
         */
        constexpr static char const* archlinux = "Archlinux";
        /**
         * The Mandrake family of operating systems.
         */
        constexpr static char const* mandrake = "Mandrake";
        /**
         * The Windows family of operating systems.
         */
        constexpr static char const* windows = "windows";
    };

}}  // namespace facter::facts
