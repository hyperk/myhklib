from hkpilot.utils.cmake import CMake


class myhklib(CMake):

    def __init__(self, path):
        super().__init__(path)
        self._package_name = "myhklib"
