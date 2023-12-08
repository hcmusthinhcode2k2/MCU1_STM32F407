year effects.
            If DateTiemGroupingType is Month, only the param year and month effect.
            </remarks>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.RemoveDateFilter(System.Int32,Aspose.Cells.DateTimeGroupingType,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)">
      <summary>
            Removes a date filter.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).
            </param>
      <param name="dateTimeGroupingType">
        <see cref="T:Aspose.Cells.DateTimeGroupingType" />
      </param>
      <param name="year">The year.</param>
      <param name="month">The month.</param>
      <param name="day">The day.</param>
      <param name="hour">The hour.</param>
      <param name="minute">The minute.</param>
      <param name="second">The second.</param>
      <remarks>
            If DateTimeGroupingType is Year, only the param year effects.
            If DateTiemGroupingType is Month, only the param year and month effect.
            </remarks>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.RemoveFilter(System.Int32,System.String)">
      <summary>
            Removes a filter for a filter column.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).
            </param>
      <param name="criteria">The specified criteria (a string; for example, "101"). 
            It only can be null or be one of the cells' value in this column.
            </param>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.Filter(System.Int32,System.String)">
      <summary>
            Filters a list with specified criteria.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).
            </param>
      <param name="criteria">The specified criteria (a string; for example, "101"). </param>
      <remarks>
            Aspose.Cells will remove all other filter setting on this field as Ms Excel 97-2003.
            </remarks>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.FilterTop10(System.Int32,System.Boolean,System.Boolean,System.Int32)">
      <summary>
            Filter the top 10 item in the list
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).</param>
      <param name="isTop">Indicates whether filter from top or bottom</param>
      <param name="isPercent">Indicates whether the items is percent or count </param>
      <param name="itemCount">The item count</param>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.DynamicFilter(System.Int32,Aspose.Cells.DynamicFilterType)">
      <summary>
            Adds a dynamic filter.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).</param>
      <param name="dynamicFilterType">
            Dynamic filter type.
            </param>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.AddFontColorFilter(System.Int32,Aspose.Cells.CellsColor)">
      <summary>
            Adds a font color filter.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).</param>
      <param name="color">The <see cref="T:Aspose.Cells.CellsColor" /> object.
            </param>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.AddFillColorFilter(System.Int32,Aspose.Cells.BackgroundType,Aspose.Cells.CellsColor,Aspose.Cells.CellsColor)">
      <summary>
            Adds a fill color filter.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).</param>
      <param name="pattern">The background pattern type.</param>
      <param name="foregroundColor">The foreground color.</param>
      <param name="backgroundColor">The background color.</param>
    </member>
    <member name="M:Aspose.Cells.AutoFilter.AddIconFilter(System.Int32,Aspose.Cells.IconSetType,System.Int32)">
      <summary>
            Adds an icon filter.
            </summary>
      <param name="fieldIndex">The integer offset of the field on which you want to base the filter 
            (from the left of the list; the leftmost field is field 0).</param>
      <param name="iconSetType">The icon set type.</param>
      <param name="iconId">The icon id.</param>
      <remarks>
            Only supports to add the icon filter.
            Not supports checking which row is visible if the filter is icon filter.
            </remarks>
    </member>
    <member nam