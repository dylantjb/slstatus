# Maintainer: Dylan Barker <dylan@dylantjb.com>
_pkgname=slstatus
pkgname="$_pkgname"-dylantjb-git
pkgver=1.0.r561.84a2f11
pkgrel=1
pkgdesc="Dylan's build of the suckless status monitor for window managers"
arch=('x86_64' 'i686')
url="https://github.com/dylantjb/$_pkgname"
license=('MIT')
optdepends=('amixer: for volume module')
makedepends=('make' 'git')
provides=("$_pkgname")
conflicts=("$_pkgname")
source=("git+$url")
md5sums=('SKIP')

pkgver() {
    cd "${_pkgname}"
    printf "1.0.r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

build() {
    cd "${_pkgname}"
    make
}

package() {
    cd "${_pkgname}"
    make PREFIX=/usr DESTDIR="${pkgdir}" install
    install -d "${pkgdir}"/opt/"${_pkgname}"
    install -Dm755 components/* "${pkgdir}"/opt/"${_pkgname}"
    install -Dm644 LICENSE "${pkgdir}"/usr/share/licenses/"${pkgname}"/LICENSE
}
