import qbs

QtGuiApplication {
    cpp.rpaths: qbs.targetOS.contains("darwin") ? ["@loader_path/../Frameworks"] : ["$ORIGIN/../lib"]
    cpp.cxxLanguageVersion: "c++11"

    Properties {
        condition: qbs.targetOS.contains("osx")
        cpp.cxxFlags: ["-Wno-unknown-pragmas"]
    }

    Group {
        qbs.install: true
        qbs.installDir: {
            if (qbs.targetOS.contains("windows"))
                return "";
            else if (qbs.targetOS.contains("darwin"))
                return "Tiled.app/Contents/MacOS";
            else
                return "bin";
        }

        fileTagsFilter: product.type
    }
}
