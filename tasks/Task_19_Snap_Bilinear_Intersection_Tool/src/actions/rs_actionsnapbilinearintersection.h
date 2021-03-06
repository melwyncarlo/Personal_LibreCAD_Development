/****************************************************************************
**
** This file is part of the LibreCAD project, a 2D CAD program
**
** Copyright (C) 2021 Melwyn Francis Carlo
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software
** Foundation and appearing in the file gpl-2.0.txt included in the
** packaging of this file.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** This copyright notice MUST APPEAR in all copies of the script!
**
**********************************************************************/


#pragma once


#include "rs_previewactioninterface.h"


/*
    This action class can snap (set) the relative-zero marker
    at the imaginary intersection point of two given lines.
*/


class RS_ActionSnapBilinearIntersection : public RS_PreviewActionInterface
{
    Q_OBJECT

    public:

        /* Action states */
        enum Status
        {
            SetFirstLine, 
            SetSecondLine 
        };

        RS_ActionSnapBilinearIntersection( RS_EntityContainer& container, 
                                           RS_GraphicView& graphicView);

       ~RS_ActionSnapBilinearIntersection() override;

        void init(int status = 0) override;

        void trigger() override;

        void mouseReleaseEvent (QMouseEvent* e) override;

        void updateMouseButtonHints() override;

    private:

        RS_Entity *firstLine;
        RS_Entity *secondLine;
};

